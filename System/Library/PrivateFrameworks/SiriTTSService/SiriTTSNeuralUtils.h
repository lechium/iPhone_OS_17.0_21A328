//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SiriTTSNeuralUtils : NSObject
{
}

+ (_Bool)compileANEModel:(id)arg1 error:(id *)arg2;	// IMP=0x00800000000f0216
+ (_Bool)isANEModelCompiled:(id)arg1;	// IMP=0x00800000000f00fb
+ (_Bool)shouldUseNeuralVoice:(id)arg1;	// IMP=0x00800000000effe0
+ (_Bool)isNeuralVoiceReady:(id)arg1;	// IMP=0x00800000000efec5
+ (_Bool)isH12Platform;	// IMP=0x00800000000efebb
+ (_Bool)isNeuralPlatform;	// IMP=0x00800000000efeb1
+ (_Bool)isANEOnly;	// IMP=0x00800000000efea7
+ (_Bool)hasANE;	// IMP=0x00800000000efe9d
+ (_Bool)hasAMX;	// IMP=0x00800000000efe93

@end

