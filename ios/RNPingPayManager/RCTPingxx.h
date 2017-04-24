//
//  RCTPingxx.h
//  RCTPingxx
//
//  Created by LvBingru on 10/13/15.
//  Copyright © 2015 erica. All rights reserved.
//
#import <Foundation/Foundation.h>

#if __has_include(<React/RCTBridgeModule.h>)
#import <React/RCTBridgeModule.h>
#else
#import "Base/RCTBridgeModule.h"
#endif

@interface RCTPingxx : NSObject<RCTBridgeModule>

@end
