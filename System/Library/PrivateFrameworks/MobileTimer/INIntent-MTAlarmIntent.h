//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INIntent.h>

@interface INIntent (MTAlarmIntent)
+ (id)mt_nanoAlarmBundleIDForAlarm:(id)arg1;	// IMP=0x006000000003935e
+ (void)mt_deleteDonationsForAlarm:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00600000000391a1
+ (id)mt_intentForAlarmDisable:(id)arg1;	// IMP=0x0060000000038e0e
+ (id)mt_intentForAlarmEnable:(id)arg1;	// IMP=0x0060000000038d07
+ (id)mt_intentForAlarmUpdate:(id)arg1;	// IMP=0x0060000000038c24
+ (id)mt_intentForAlarmCreate:(id)arg1;	// IMP=0x0060000000038ada
- (id)mt_initWithAlarm:(id)arg1 verb:(id)arg2;	// IMP=0x0010000000038f15
@end

