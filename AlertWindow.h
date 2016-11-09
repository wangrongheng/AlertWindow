//
//  AlertWindow.h
//  FindJob
//
//  Created by wong on 15-12-8.
//  Copyright (c) 2014年 wong. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AlertWindow : UIView

+ (void) showWithMessage:(NSString *)message canceDelay:(NSTimeInterval)delay;
@end
