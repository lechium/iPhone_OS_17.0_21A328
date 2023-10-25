//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, SKUIColorScheme, SKUILockupSwooshArtworkLoader, SKUILockupSwooshViewController, SKUIMissingItemLoader, SKUIResourceLoader, SKUISwooshPageComponent, UIViewController;

__attribute__((visibility("hidden")))
@interface SKUIProductPageTableSwooshSection
{
    CDUnknownBlockType _actionBlock;	// 8 = 0x8
    SKUILockupSwooshArtworkLoader *_artworkLoader;	// 16 = 0x10
    SKUIMissingItemLoader *_missingItemLoader;	// 24 = 0x18
    SKUIResourceLoader *_resourceLoader;	// 32 = 0x20
    SKUISwooshPageComponent *_swooshComponent;	// 40 = 0x28
    SKUILockupSwooshViewController *_swooshViewController;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000001d1777
@property(retain, nonatomic) SKUIResourceLoader *resourceLoader; // @synthesize resourceLoader=_resourceLoader;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
- (id)_swooshViewController;	// IMP=0x00000000001d1607
- (id)_missingItemLoader;	// IMP=0x00000000001d1568
- (id)_artworkLoader;	// IMP=0x00000000001d14b6
- (id)swoosh:(id)arg1 imageForCellAtIndex:(long long)arg2;	// IMP=0x00000000001d1362
- (void)swoosh:(id)arg1 didSelectCellAtIndex:(long long)arg2;	// IMP=0x00000000001d129f
- (void)missingItemLoader:(id)arg1 didLoadItems:(id)arg2 invalidItemIdentifiers:(id)arg3;	// IMP=0x00000000001d11bd
- (id)headerViewForTableView:(id)arg1;	// IMP=0x00000000001d10f4
@property(readonly, nonatomic) UIViewController *swooshViewController;
@property(retain, nonatomic) SKUIColorScheme *colorScheme;
- (void)dealloc;	// IMP=0x00000000001d0fbc
- (id)initWithLockups:(id)arg1 title:(id)arg2;	// IMP=0x00000000001d0ec2
- (id)initWithItems:(id)arg1 title:(id)arg2;	// IMP=0x00000000001d0d8c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
