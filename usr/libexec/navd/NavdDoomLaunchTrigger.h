//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface NavdDoomLaunchTrigger : NSObject
{
    NSDate *_triggerDate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000003cf0c
@property(readonly, nonatomic) NSDate *triggerDate; // @synthesize triggerDate=_triggerDate;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) long long type;
- (id)initWithTriggerDate:(id)arg1;	// IMP=0x001000000003cdbb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

