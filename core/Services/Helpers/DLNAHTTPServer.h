//
//  DLNAHTTPServer.h
//  Connect SDK
//
//  Created by Jeremy White on 9/30/14.
//  Copyright (c) 2014 LG Electronics.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#import <Foundation/Foundation.h>
#import <GCDWebServer/GCDWebServer.h>
#import "ServiceSubscription.h"

@interface DLNAHTTPServer : NSObject <GCDWebServerDelegate>

- (void) start;
- (void) stop;
- (void) addSubscription:(ServiceSubscription *)subscription;
- (void) removeSubscription:(ServiceSubscription *)subscription;

- (NSString *) getHostPath;

@property (nonatomic, readonly) GCDWebServer *server;
@property (nonatomic, readonly) BOOL isRunning;
@property (nonatomic, readonly) BOOL hasSubscriptions;

@end
