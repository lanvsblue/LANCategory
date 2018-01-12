//
//  UIView+Subview.h
//  boot
//
//  Created by 蓝布鲁 on 2017/12/6.
//  Copyright © 2017年 Facebook. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Subview)

- (void)removeAllSubviews;

- (void)removeSubViewWithTag:(NSInteger)tag;
@end
