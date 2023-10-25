//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface MLOutputBackingsVerifier : NSObject
{
    NSDictionary *_outputDescriptions;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000008788c
@property(readonly, nonatomic) NSDictionary *outputDescriptions; // @synthesize outputDescriptions=_outputDescriptions;
- (_Bool)_verifyPixelBufferOutputBacking:(struct __CVBuffer *)arg1 forFeature:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000087385
- (_Bool)_verifyMultiArrayOutputBacking:(id)arg1 forFeature:(id)arg2 error:(id *)arg3;	// IMP=0x000000000008701a
- (_Bool)_verifyOutputBacking:(id)arg1 forFeature:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000086d36
- (_Bool)verifyOutputBackings:(id)arg1 predictionUsesBatch:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00000000000868db
- (id)initWithOutputDescriptions:(id)arg1;	// IMP=0x000000000008685c

@end
