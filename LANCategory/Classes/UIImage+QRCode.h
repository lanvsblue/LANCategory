//
// Created by 蓝布鲁 on 2018/1/8.
// Copyright (c) 2018 Facebook. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UIImage (QRCode)
+ (instancetype)imageWithQRString:(NSString *)qrString size:(CGFloat)size;
@end