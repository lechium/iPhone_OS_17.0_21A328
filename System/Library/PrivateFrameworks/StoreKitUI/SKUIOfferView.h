//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMapTable, NSMutableArray, NSNumber, NSString, UIButton;
@protocol SKUIOfferViewDelegate;

__attribute__((visibility("hidden")))
@interface SKUIOfferView
{
    _Bool _showingConfirmation;	// 8 = 0x8
    _Bool _compactModeEnabled;	// 9 = 0x9
    id <SKUIOfferViewDelegate> _delegate;	// 16 = 0x10
    long long _metadataPosition;	// 24 = 0x18
    unsigned long long _alignment;	// 32 = 0x20
    NSMapTable *_buttonElements;	// 40 = 0x28
    NSMapTable *_buyButtonDescriptorToButton;	// 48 = 0x30
    NSMapTable *_notices;	// 56 = 0x38
    UIButton *_hlsPlayButton;	// 64 = 0x40
    NSNumber *_hlsID;	// 72 = 0x48
    NSMutableArray *_metadataViews;	// 80 = 0x50
    NSMutableArray *_offerButtonViews;	// 88 = 0x58
}

+ (id)_attributedStringForLabel:(id)arg1 context:(id)arg2;	// IMP=0x00100000003a8411
+ (id)_attributedStringForButton:(id)arg1 context:(id)arg2;	// IMP=0x00100000003a8239
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;	// IMP=0x00100000003a3a4b
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x00100000003a371d
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;	// IMP=0x00100000003a364e
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x00100000003a34b8
- (void).cxx_destruct;	// IMP=0x00000000003a89bf
@property(retain, nonatomic) NSMutableArray *offerButtonViews; // @synthesize offerButtonViews=_offerButtonViews;
@property(retain, nonatomic) NSMutableArray *metadataViews; // @synthesize metadataViews=_metadataViews;
@property(retain, nonatomic) NSNumber *hlsID; // @synthesize hlsID=_hlsID;
@property(retain, nonatomic) UIButton *hlsPlayButton; // @synthesize hlsPlayButton=_hlsPlayButton;
@property(retain, nonatomic) NSMapTable *notices; // @synthesize notices=_notices;
@property(retain, nonatomic) NSMapTable *buyButtonDescriptorToButton; // @synthesize buyButtonDescriptorToButton=_buyButtonDescriptorToButton;
@property(retain, nonatomic) NSMapTable *buttonElements; // @synthesize buttonElements=_buttonElements;
@property(nonatomic) unsigned long long alignment; // @synthesize alignment=_alignment;
@property(nonatomic, getter=isCompactModeEnabled) _Bool compactModeEnabled; // @synthesize compactModeEnabled=_compactModeEnabled;
@property(nonatomic, getter=isShowingConfirmation) _Bool showingConfirmation; // @synthesize showingConfirmation=_showingConfirmation;
@property(nonatomic) long long metadataPosition; // @synthesize metadataPosition=_metadataPosition;
@property(nonatomic) __weak id <SKUIOfferViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_shouldHideNoticesWithBuyButtonDescriptor:(id)arg1 context:(id)arg2;	// IMP=0x00000000003a8704
- (void)_sendWillAnimate;	// IMP=0x00000000003a86a7
- (void)_showConfirmationAction:(id)arg1;	// IMP=0x00000000003a80a8
- (void)_cancelConfirmationAction:(id)arg1;	// IMP=0x00000000003a8033
- (void)_buttonAction:(id)arg1;	// IMP=0x00000000003a7ab0
- (void)itemOfferButtonWillAnimateTransition:(id)arg1;	// IMP=0x00000000003a72ef
- (void)itemOfferButtonDidAnimateTransition:(id)arg1;	// IMP=0x00000000003a723d
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000003a7086
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000003a69c5
- (void)layoutSubviews;	// IMP=0x00000000003a59d4
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x00000000003a59cc
- (void)setContentInset:(struct UIEdgeInsets)arg1;	// IMP=0x00000000003a59ba
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000000003a5612
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x00000000003a560a
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x00000000003a44f9
@property(readonly, nonatomic) NSString *offerViewStateDescription;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000003a3273

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

