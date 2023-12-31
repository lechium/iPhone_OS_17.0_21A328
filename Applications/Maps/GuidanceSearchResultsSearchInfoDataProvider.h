//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOFeatureStyleAttributes, NSError, NSString, SearchInfo;

@interface GuidanceSearchResultsSearchInfoDataProvider : NSObject
{
    SearchInfo *_searchInfo;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000088e739
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) SearchInfo *searchInfo; // @synthesize searchInfo=_searchInfo;
- (void)loadSearchResultsWithRouteInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000088dda8
- (_Bool)hasValidSearchResults;	// IMP=0x001000000088dcdc
@property(readonly, nonatomic) GEOFeatureStyleAttributes *styleAttributes;
@property(readonly, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSString *title;
- (id)initWithSearchInfo:(id)arg1 error:(id)arg2;	// IMP=0x001000000088da78

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

