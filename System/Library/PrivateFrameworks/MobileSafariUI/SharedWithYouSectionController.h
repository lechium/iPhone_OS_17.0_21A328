//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "LibrarySectionController.h"

@class CloudTabsLibraryItemController, SharedWithYouLibraryItemController;

__attribute__((visibility("hidden")))
@interface SharedWithYouSectionController : LibrarySectionController
{
    CloudTabsLibraryItemController *_cloudTabsItemController;	// 8 = 0x8
    SharedWithYouLibraryItemController *_friendsItemController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001d15cd
- (void)registerItemsWithRegistration:(id)arg1;	// IMP=0x00000000001d15a0
- (id)title;	// IMP=0x00000000001d1593
- (id)itemControllers;	// IMP=0x00000000001d1539
- (id)initWithConfiguration:(id)arg1;	// IMP=0x00000000001d1493

@end
