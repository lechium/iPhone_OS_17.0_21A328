//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CSManualDuckingHandler : NSObject
{
}

- (void)duckAudioDeviceWithDeviceID:(unsigned int)arg1 duckedLevel:(float)arg2 rampDuration:(float)arg3;	// IMP=0x004000000013d1a6
- (void)duckDefaultOutputAudioDeviceWithDuckedLevel:(float)arg1 rampDuration:(float)arg2;	// IMP=0x001000000013d1a0
- (void)resetDucking;	// IMP=0x001000000013d19a
- (id)init;	// IMP=0x001000000013d18c

@end
