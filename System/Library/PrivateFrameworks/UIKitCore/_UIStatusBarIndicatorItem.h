//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UIStatusBarItem.h"

@class NSArray, NSString, _UIStatusBarImageView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarIndicatorItem : _UIStatusBarItem
{
    NSArray *_currentImageNamePrefixes;	// 8 = 0x8
    _UIStatusBarImageView *_imageView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000010fccd1
@property(retain, nonatomic) _UIStatusBarImageView *imageView; // @synthesize imageView=_imageView;
@property(copy, nonatomic) NSArray *currentImageNamePrefixes; // @synthesize currentImageNamePrefixes=_currentImageNamePrefixes;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;	// IMP=0x00000000010fc7fb
- (_Bool)shouldUpdateIndicatorForIdentifier:(id)arg1;	// IMP=0x00000000010fc798
- (id)imageViewForIdentifier:(id)arg1;	// IMP=0x00000000010fc786
- (id)viewForIdentifier:(id)arg1;	// IMP=0x00000000010fc774
- (void)_create_imageView;	// IMP=0x00000000010fc71a
- (_Bool)crossfadeForUpdate:(id)arg1;	// IMP=0x00000000010fc6db
- (id)imageForUpdate:(id)arg1;	// IMP=0x00000000010fc44d
- (id)imageNameForUpdate:(id)arg1;	// IMP=0x00000000010fc445
- (_Bool)useMultiColorSystemImageForUpdate:(id)arg1;	// IMP=0x00000000010fc43d
- (id)systemImageNameForUpdate:(id)arg1;	// IMP=0x00000000010fc435
@property(readonly, nonatomic) _Bool flipsForRightToLeftLayoutDirection;
@property(readonly, nonatomic) _Bool isTemplateImage;
@property(readonly, nonatomic) NSString *indicatorEntryKey;
- (id)dependentEntryKeys;	// IMP=0x00000000010fc3b5

@end

