//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PPTNotificationCenter : NSObject
{
}

+ (void)setEnabled:(_Bool)arg1;	// IMP=0x00200000003b625c
+ (_Bool)isEnabled;	// IMP=0x00100000003b6250
+ (void)addOnceObserverForName:(id)arg1 object:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000003b5fab
+ (void)postNotificationIfNeededWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;	// IMP=0x00100000003b5ef3

@end
