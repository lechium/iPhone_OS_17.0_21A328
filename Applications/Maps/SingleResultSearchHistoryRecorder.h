//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SearchResult;

@interface SingleResultSearchHistoryRecorder : NSObject
{
    SearchResult *_searchResult;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000908541
@property(retain, nonatomic) SearchResult *searchResult; // @synthesize searchResult=_searchResult;
- (void)recordItemInHistory;	// IMP=0x0010000000908446
- (id)initWithSearchResult:(id)arg1;	// IMP=0x00100000009083db

@end

