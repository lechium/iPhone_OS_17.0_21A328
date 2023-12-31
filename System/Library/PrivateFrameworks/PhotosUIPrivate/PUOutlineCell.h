//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UICollectionViewOutlineCell.h>

@class NSString, UIImage, UIImageView;
@protocol PUOutlineCellDelegate, PXNavigationListItem;

__attribute__((visibility("hidden")))
@interface PUOutlineCell : _UICollectionViewOutlineCell
{
    UIImage *_image;	// 8 = 0x8
    NSString *_text;	// 16 = 0x10
    id <PXNavigationListItem> _item;	// 24 = 0x18
    id <PUOutlineCellDelegate> _delegate;	// 32 = 0x20
    long long _style;	// 40 = 0x28
    long long _mediaRequestID;	// 48 = 0x30
    UIImageView *_accessoryImageView;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000002a0ea4
@property(retain, nonatomic) UIImageView *accessoryImageView; // @synthesize accessoryImageView=_accessoryImageView;
@property(nonatomic) long long mediaRequestID; // @synthesize mediaRequestID=_mediaRequestID;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) __weak id <PUOutlineCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <PXNavigationListItem> item; // @synthesize item=_item;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void)_renameItem:(id)arg1 toTitle:(id)arg2;	// IMP=0x00000000002a0d4a
- (id)_editingConfigurationForState:(unsigned long long)arg1;	// IMP=0x00000000002a0bc5
- (void)prepareForReuse;	// IMP=0x00000000002a0b4c
- (_Bool)canBecomeFocused;	// IMP=0x00000000002a0b44
- (_Bool)_hasEditSpecificAccessories;	// IMP=0x00000000002a0a04
- (void)_updateViewConfigurationsWithState:(unsigned long long)arg1;	// IMP=0x00000000002a00ae

@end

