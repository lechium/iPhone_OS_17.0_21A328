//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CSPreventSystemSleepPowerAssertion : NSObject
{
    double _timeoutInterval;	// 8 = 0x8
    unsigned int _preventUserIdleSystemSleepAssertionId;	// 16 = 0x10
    unsigned int _preventSystemSleepAssertionId;	// 20 = 0x14
}

- (void)_releaseAssertionForAssertionId:(unsigned int *)arg1 details:(struct __CFString *)arg2;	// IMP=0x002000000000575c
- (void)_acquireAssertionForType:(struct __CFString *)arg1 withTimeout:(double)arg2 assertionId:(unsigned int *)arg3 details:(struct __CFString *)arg4;	// IMP=0x00100000000054f1
- (void)invalidate;	// IMP=0x00100000000053ca
- (void)dealloc;	// IMP=0x001000000000538c
- (id)initWithTimeOut:(double)arg1;	// IMP=0x00100000000052e3

@end

