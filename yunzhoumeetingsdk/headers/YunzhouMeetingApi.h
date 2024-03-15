//
//  YunzhouMeetingApi.h
//  YunzhouMeetingApi
//
//  Created by hongtao liu on 2024/2/6.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/// 进入会议类型
typedef NS_ENUM(NSUInteger, EntryType) {
    EntryType_Meeting_Creat    = 0,         // 创建会议
    EntryType_Meeting_Join     = 1,         // 加入会议
    EntryType_Call_Start       = 2,         // 发起呼叫
    EntryType_Call_Receive     = 3,         //收到呼叫
};

@interface YunzhouMeetingApi : NSObject

/// 单例
+ (instancetype)sharedInstance;

/**
 * 创建会议 / 加入会议
 *
 * @param viewController       需要弹出视图的控制器
 * @param options              传入参数信息 ： （userInfo, serverUrl）
 * @param meetingType          进入会议类型（创建会议 / 加入会议）
 *
 */
- (void)startWithController:(UIViewController *)viewController options:(NSDictionary *)options meetingType:(EntryType)entryType;

@end

NS_ASSUME_NONNULL_END
