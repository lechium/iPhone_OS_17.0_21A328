//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ATAudioSessionClientImpl;

__attribute__((visibility("hidden")))
@interface ATAudioSessionPropertyManager : NSObject
{
    ATAudioSessionClientImpl *mAsClientImpl;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000bf57c
- (int)SetProperty:(unsigned int)arg1 size:(unsigned int)arg2 data:(const void *)arg3;	// IMP=0x00000000000bea9b
- (int)GetProperty:(unsigned int)arg1 size:(unsigned int *)arg2 data:(void *)arg3;	// IMP=0x00000000000be158
- (id)initWithATAudioSessionClientImpl:(id)arg1;	// IMP=0x00000000000bdf70

@end

