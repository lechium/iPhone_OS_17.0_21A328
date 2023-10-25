//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNAvatarImageRenderer, CNVisualIdentity, NSData, NSString, UIColor;
@protocol CNAvatarImageRenderingScope;

__attribute__((visibility("hidden")))
@interface CNPhotoPickerMonogramProviderItem
{
    _Bool _isContactImage;	// 8 = 0x8
    _Bool _hasUnknownColor;	// 9 = 0x9
    _Bool _isVariantOptionItem;	// 10 = 0xa
    NSString *_monogramText;	// 16 = 0x10
    CNVisualIdentity *_visualIdentity;	// 24 = 0x18
    CNAvatarImageRenderer *_avatarRenderer;	// 32 = 0x20
    id <CNAvatarImageRenderingScope> _renderingScope;	// 40 = 0x28
    NSData *_monogramData;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000002bf1f1
@property(nonatomic) _Bool isVariantOptionItem; // @synthesize isVariantOptionItem=_isVariantOptionItem;
@property(retain, nonatomic) NSData *monogramData; // @synthesize monogramData=_monogramData;
@property(nonatomic) _Bool hasUnknownColor; // @synthesize hasUnknownColor=_hasUnknownColor;
@property(nonatomic) _Bool isContactImage; // @synthesize isContactImage=_isContactImage;
@property(retain, nonatomic) id <CNAvatarImageRenderingScope> renderingScope; // @synthesize renderingScope=_renderingScope;
@property(retain, nonatomic) CNAvatarImageRenderer *avatarRenderer; // @synthesize avatarRenderer=_avatarRenderer;
@property(retain, nonatomic) CNVisualIdentity *visualIdentity; // @synthesize visualIdentity=_visualIdentity;
@property(retain, nonatomic) NSString *monogramText; // @synthesize monogramText=_monogramText;
- (unsigned long long)hash;	// IMP=0x00000000002bf05a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002beec0
- (id)updatedProviderItemWithText:(id)arg1;	// IMP=0x00000000002bedf1
- (id)contactImageForMetadataStore;	// IMP=0x00000000002bec35
- (id)createColorVariantItemsExcludingSelf;	// IMP=0x00000000002beba5
- (id)createColorVariantItems;	// IMP=0x00000000002beae1
- (id)createVariantsItemsWithVariantsManager:(id)arg1;	// IMP=0x00000000002be9e1
- (id)monogramVariantItemForColor:(id)arg1;	// IMP=0x00000000002be7a8
- (void)updateVisualIdentity:(id)arg1;	// IMP=0x00000000002be634
- (void)updateWithMonogramData:(id)arg1;	// IMP=0x00000000002be5ce
- (void)renderMonogramData;	// IMP=0x00000000002be4fb
- (id)generateMonogramData;	// IMP=0x00000000002be4b4
- (id)generateMonogramImage;	// IMP=0x00000000002be28c
- (id)generateThumbnailImageDataIfNeeded;	// IMP=0x00000000002be224
- (id)thumbnailImageData;	// IMP=0x00000000002be181
- (id)imageData;	// IMP=0x00000000002be0de
- (id)variantIdentifier;	// IMP=0x00000000002be064
- (id)localizedVariantsTitle;	// IMP=0x00000000002be008
- (_Bool)isGrayMonogramItem;	// IMP=0x00000000002bdfa5
- (_Bool)allowsMoveAndScale;	// IMP=0x00000000002bdf9d
- (_Bool)allowsEditing;	// IMP=0x00000000002bdf43
- (_Bool)shouldShowCaption;	// IMP=0x00000000002bdf3b
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(readonly, nonatomic) NSString *itemText;
- (unsigned long long)imageType;	// IMP=0x00000000002bde2e
- (_Bool)allowsVariants;	// IMP=0x00000000002bddb0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002bdc3e
- (id)initWithImageData:(id)arg1 thumbnailImageData:(id)arg2 fullscreenImageData:(id)arg3 cropRect:(struct CGRect)arg4 renderingScope:(id)arg5 avatarRenderer:(id)arg6 isVariantOptionItem:(_Bool)arg7;	// IMP=0x00000000002bdb3e

@end
