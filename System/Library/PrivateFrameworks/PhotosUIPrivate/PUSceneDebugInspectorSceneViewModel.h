//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface PUSceneDebugInspectorSceneViewModel : NSObject
{
    _Bool _isIndexed;	// 8 = 0x8
    unsigned int _sceneIdentifier;	// 12 = 0xc
    NSString *_keyword;	// 16 = 0x10
    double _threshold;	// 24 = 0x18
    NSArray *_synonyms;	// 32 = 0x20
    unsigned long long _count;	// 40 = 0x28
    unsigned long long _highConfidenceCount;	// 48 = 0x30
    double _libraryCoverage;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000004e9142
@property(nonatomic) double libraryCoverage; // @synthesize libraryCoverage=_libraryCoverage;
@property(nonatomic) unsigned long long highConfidenceCount; // @synthesize highConfidenceCount=_highConfidenceCount;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(readonly, nonatomic) NSArray *synonyms; // @synthesize synonyms=_synonyms;
@property(readonly, nonatomic) double threshold; // @synthesize threshold=_threshold;
@property(readonly, nonatomic) _Bool isIndexed; // @synthesize isIndexed=_isIndexed;
@property(readonly, nonatomic) unsigned int sceneIdentifier; // @synthesize sceneIdentifier=_sceneIdentifier;
@property(readonly, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
- (id)description;	// IMP=0x00000000004e8fe7
- (id)concatenatedSynonyms;	// IMP=0x00000000004e8f72
- (id)initWithKeyword:(id)arg1 synonyms:(id)arg2 sceneIdentifier:(unsigned int)arg3 indexed:(_Bool)arg4 threshold:(double)arg5;	// IMP=0x00000000004e8e9e

@end

