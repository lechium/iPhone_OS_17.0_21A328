//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIViewElement.h"

@class NSArray, NSString, SKUIMenuBarViewElementConfiguration;

__attribute__((visibility("hidden")))
@interface SKUIMenuBarViewElement : SKUIViewElement
{
    NSArray *_titleViewElements;	// 8 = 0x8
    SKUIMenuBarViewElementConfiguration *_configuration;	// 16 = 0x10
}

+ (Class)_shelfMenuBarViewElementClass;	// IMP=0x00100000000defbb
+ (Class)_titlesMenuBarViewElementClass;	// IMP=0x00100000000defaa
+ (id)supportedFeatures;	// IMP=0x00100000000dede2
- (void).cxx_destruct;	// IMP=0x00000000000df366
@property(retain, nonatomic) SKUIMenuBarViewElementConfiguration *configuration; // @synthesize configuration=_configuration;
- (void)_reloadMenuItems;	// IMP=0x00000000000defcc
- (id)titleForMenuItemAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000def8d
- (void)_menuBarViewElementConfigurationRequestsReload:(id)arg1;	// IMP=0x00000000000def6c
- (id)applyUpdatesWithElement:(id)arg1;	// IMP=0x00000000000deec8
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;	// IMP=0x00000000000deb29

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
