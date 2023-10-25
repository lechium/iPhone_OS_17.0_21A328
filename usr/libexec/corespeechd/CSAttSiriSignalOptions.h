//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSAttendingOptions, CSAudioStreamRequest;

@interface CSAttSiriSignalOptions : NSObject
{
    CSAttendingOptions *_attendingOptions;	// 8 = 0x8
    CSAudioStreamRequest *_audioStreamRequest;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000b6527
@property(readonly, nonatomic) CSAudioStreamRequest *audioStreamRequest; // @synthesize audioStreamRequest=_audioStreamRequest;
@property(readonly, nonatomic) CSAttendingOptions *attendingOptions; // @synthesize attendingOptions=_attendingOptions;
- (id)initWithAttendingOptions:(id)arg1 audioStreamRequest:(id)arg2;	// IMP=0x00100000000b645a

@end
