//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIActivityItemProvider.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC15PhotosUIPrivate31StoryExportActivityItemProvider : UIActivityItemProvider
{
    MISSING_TYPE *storyConfiguration;	// 8 = 0x8
    MISSING_TYPE *aspectRatio;	// 16 = 0x10
    MISSING_TYPE *destinationURL;	// 101777541 = 0x6110085
    MISSING_TYPE *exportManager;	// 25 = 0x19
    MISSING_TYPE *iconAsset;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *fullSizePlayerExtendedTraitCollectionSnapshot;	// 0 = 0x0
    MISSING_TYPE *delegate;	// 0 = 0x0
    MISSING_TYPE *progressController;	// 8286208 = 0x7e7000
}

- (void).cxx_destruct;	// IMP=0x0000000000017beb
- (void)cancel;	// IMP=0x0000000000017b9a
- (id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2;	// IMP=0x0000000000016b7e
@property(nonatomic, readonly) id item;
- (id)initWithPlaceholderItem:(id)arg1;	// IMP=0x0000000000016400

@end
