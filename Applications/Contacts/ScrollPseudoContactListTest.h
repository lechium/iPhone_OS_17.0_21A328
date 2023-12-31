//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableDictionary, NSString;

@interface ScrollPseudoContactListTest
{
    _Bool _animate;	// 8 = 0x8
    NSArray *_allSearchQueries;	// 16 = 0x10
    unsigned long long _currentQueryIndex;	// 24 = 0x18
    double _lastSearchBeginTime;	// 32 = 0x20
    NSMutableDictionary *_extraResults;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000010392
@property(retain, nonatomic) NSMutableDictionary *extraResults; // @synthesize extraResults=_extraResults;
@property(nonatomic) double lastSearchBeginTime; // @synthesize lastSearchBeginTime=_lastSearchBeginTime;
@property(nonatomic) unsigned long long currentQueryIndex; // @synthesize currentQueryIndex=_currentQueryIndex;
@property(retain, nonatomic) NSArray *allSearchQueries; // @synthesize allSearchQueries=_allSearchQueries;
@property(nonatomic) _Bool animate; // @synthesize animate=_animate;
- (void)startSearchQueryWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000101db
- (_Bool)prepareForTestWithOptions:(id)arg1;	// IMP=0x001000000000fdec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

