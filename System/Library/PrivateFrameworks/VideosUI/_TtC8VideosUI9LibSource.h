//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE;

@interface _TtC8VideosUI9LibSource : _TtCs12_SwiftObject
{
    MISSING_TYPE *ownerName;	// 16 = 0x10
    MISSING_TYPE *libMenuRequests;	// 32 = 0x20
    MISSING_TYPE *isMPDownloadingFetchInProgress;	// 40 = 0x28
    MISSING_TYPE *id;	// 48 = 0x30
    MISSING_TYPE *type;	// 64 = 0x40
    MISSING_TYPE *_menuItems;	// 1032538310 = 0x3d8b48c6
    MISSING_TYPE *_selectedMenuItem;	// 2581360104 = 0x99dc6de8
    MISSING_TYPE *_hasExecutedMenuFetchOnce;	// 1218284872 = 0x489d8d48
}

- (void)refreshRentalMenu;	// IMP=0x00000000007e0f07
- (void)localMPMediaLibraryDownloadingDidChange;	// IMP=0x00000000007e0ae5
- (void)sideBandContentChanged;	// IMP=0x00000000007e07fd
- (void)localMPMediaLibraryContentChanged;	// IMP=0x00000000007e075c

@end
