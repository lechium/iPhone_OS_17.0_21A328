//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE;

@interface _TtC8VideosUI20LibDataSourceManager : _TtCs12_SwiftObject
{
    MISSING_TYPE *_isLoading;	// 267572991 = 0xff2d6ff
    MISSING_TYPE *_showHomeSharingLibraryUnavailableAlert;	// 1581341456 = 0x5e415b10
    MISSING_TYPE *_libSources;	// 3469564725 = 0xcecd5b35
    MISSING_TYPE *_selectedLibSource;	// 2336801673 = 0x8b48c389
    MISSING_TYPE *_isOffline;	// 1527825539 = 0x5b10c483
    MISSING_TYPE *menuDataCache;	// 3240137509 = 0xc1209325
    MISSING_TYPE *familyMemberServiceRequest;	// 1096237541 = 0x415741e5
}

- (void)handleNetworkChanges;	// IMP=0x000000000049d599
- (void)handleAccountChanges;	// IMP=0x000000000049d3d8
- (void)handleHomeSharingUpdates;	// IMP=0x000000000049d3af

@end
