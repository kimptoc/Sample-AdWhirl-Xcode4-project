//
//  testerAppDelegate.h
//  tester
//
//  Created by Chris Kimpton on 11/01/2012.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "AdWhirl/AdWhirlDelegateProtocol.h"

@interface testerAppDelegate : UIResponder <UIApplicationDelegate, AdWhirlDelegate>

@property (strong, nonatomic) UIWindow *window;

@end
