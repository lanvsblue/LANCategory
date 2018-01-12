//
//  UIAlertController+Simple.h
//  boot
//
//  Created by 蓝布鲁 on 2017/12/20.
//  Copyright © 2017年 Facebook. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIAlertController (Simple)

+ (instancetype)alertControllerWithTitle:(NSString *)title
                                 message:(NSString *)message
                            cancelTapped:(void (^)())cancelTapped
                              doneTapped:(void (^)())doneTapped;

- (void)showWithCompletion:(void (^)())completion;

@end
