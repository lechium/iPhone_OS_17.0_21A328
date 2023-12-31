//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableSet, SearchHomeDataSource;

@interface MapsAppTestCitySelector
{
    NSMutableSet *_updatedDataFetchers;	// 8 = 0x8
    unsigned long long _numberOfDataFetchers;	// 16 = 0x10
    SearchHomeDataSource *_searchHomeDataSource;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000097d94b
@property(retain, nonatomic) SearchHomeDataSource *searchHomeDataSource; // @synthesize searchHomeDataSource=_searchHomeDataSource;
@property(nonatomic) unsigned long long numberOfDataFetchers; // @synthesize numberOfDataFetchers=_numberOfDataFetchers;
@property(retain, nonatomic) NSMutableSet *updatedDataFetchers; // @synthesize updatedDataFetchers=_updatedDataFetchers;
- (void)_dispatchAfterShortDelay:(CDUnknownBlockType)arg1;	// IMP=0x001000000097d831
- (void)runScrollTest;	// IMP=0x001000000097d5bd
- (void)continueAfterCollectingDataFromDataFetchers;	// IMP=0x001000000097d3c1
- (void)didUpdateDataFetcher:(id)arg1;	// IMP=0x001000000097d235
- (_Bool)runTest;	// IMP=0x001000000097ce63
- (id)initWithApplication:(id)arg1 testName:(id)arg2 options:(id)arg3;	// IMP=0x001000000097ce06

@end

