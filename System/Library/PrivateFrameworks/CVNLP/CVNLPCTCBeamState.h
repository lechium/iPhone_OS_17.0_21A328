//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface CVNLPCTCBeamState : NSObject
{
    NSMutableDictionary *_mutablePaths;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000007a3f0
@property(retain, nonatomic) NSMutableDictionary *mutablePaths; // @synthesize mutablePaths=_mutablePaths;
- (void)applyWordLanguageModelProbabilityToPaths;	// IMP=0x000000000007a070
- (void)mergePathsWithTrailingWhitespaces;	// IMP=0x0000000000079c60
- (void)kBest:(id *)arg1 discarded:(id *)arg2 k:(unsigned long long)arg3 shouldUpdateLMState:(_Bool)arg4;	// IMP=0x0000000000079370
- (id)sortedKeys;	// IMP=0x0000000000079350
- (void)enumeratePathsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000079280
- (id)paths;	// IMP=0x0000000000079260
- (id)pathForString:(id)arg1;	// IMP=0x0000000000079230
- (id)debugDescription;	// IMP=0x00000000000790a0
- (void)addPath:(id)arg1;	// IMP=0x0000000000078f80
- (id)init;	// IMP=0x0000000000078f00

@end

