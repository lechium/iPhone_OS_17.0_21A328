//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SearchResult;

@interface CustomSearchResultHistoryItem : NSObject
{
    SearchResult *_customSearchResult;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000003fa19a
@property(readonly, nonatomic) SearchResult *customSearchResult; // @synthesize customSearchResult=_customSearchResult;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000003fa137
@property(readonly, nonatomic) double timestamp;
- (id)initWithSearchResult:(id)arg1;	// IMP=0x00100000003fa0a3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

