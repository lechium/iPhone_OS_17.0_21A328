//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface SearchResultsImpressionMetadata : NSObject
{
    _Bool _enriched;	// 8 = 0x8
    unsigned int _localSearchProviderId;	// 12 = 0xc
    unsigned long long _resultIndex;	// 16 = 0x10
    unsigned long long _businessId;	// 24 = 0x18
    NSString *_query;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000009c7213
@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
@property(nonatomic) unsigned int localSearchProviderId; // @synthesize localSearchProviderId=_localSearchProviderId;
@property(nonatomic) unsigned long long businessId; // @synthesize businessId=_businessId;
@property(nonatomic, getter=isEnriched) _Bool enriched; // @synthesize enriched=_enriched;
@property(nonatomic) unsigned long long resultIndex; // @synthesize resultIndex=_resultIndex;
- (id)initWithResultIndex:(unsigned long long)arg1 businessId:(unsigned long long)arg2 localSearchProviderId:(unsigned int)arg3 query:(id)arg4;	// IMP=0x00100000009c7115

@end
