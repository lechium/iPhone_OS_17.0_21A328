//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKTextAttributesViewController, NSString;

@interface AKFontChooserUIItemDelegate : NSObject
{
    AKTextAttributesViewController *_parentController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000065ad1
@property __weak AKTextAttributesViewController *parentController; // @synthesize parentController=_parentController;
- (void)syncFontsToUI:(id)arg1;	// IMP=0x0000000000065a41
- (id)convertFont:(id)arg1;	// IMP=0x00000000000659c7
- (long long)tag;	// IMP=0x00000000000659bc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
