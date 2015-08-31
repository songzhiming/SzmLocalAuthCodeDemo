//
//  AuthcodeView.h
//  SzmLocalAuthCode_oc
//
//  Created by 宋志明 on 15/8/31.
//  Copyright (c) 2015年 宋志明. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AuthcodeView : UIView


@property (strong, nonatomic) NSArray *dataArray;//字符素材数组

@property (strong, nonatomic) NSMutableString *authCodeStr;//验证码字符串


@end
