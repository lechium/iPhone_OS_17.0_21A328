//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface RAPNotificationLogEvent : NSObject
{
}

+ (id)_buildRequestParamsWithRapId:(id)arg1 responseId:(id)arg2;	// IMP=0x0040000000011222
+ (void)reportUserTappedNotificationWithRapId:(id)arg1 responseId:(id)arg2 notificationType:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000010fd0
+ (void)reportNotificationWasShownWithRapId:(id)arg1 responseId:(id)arg2 notificationType:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000010d7e

@end
