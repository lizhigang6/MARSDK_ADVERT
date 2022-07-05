//
//  ADModel.h
//  MARSDK_ADVERT
//
//  Created by 火星人 on 2022/3/9.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ADModel : NSObject

//浮窗开关
@property (strong, nonatomic) NSString *floatSwitch;
//禁用实名
@property (strong, nonatomic) NSString *disableRealnameSwitch;
//跳过实名
@property (strong, nonatomic) NSString *jumpRealnameSwitch;
//请求ip
@property (strong, nonatomic) NSString *ip;
//时间戳
@property (strong, nonatomic) NSString *timeStamp;

// 实名认证奖励提示
@property (strong, nonatomic) NSString *tipRealNameReward;


+(ADModel*) sharedInstance;

@end

NS_ASSUME_NONNULL_END
