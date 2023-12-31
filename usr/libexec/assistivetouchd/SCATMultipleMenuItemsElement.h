//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;
@protocol SCATMultipleMenuItemsElementDelegate;

@interface SCATMultipleMenuItemsElement
{
    NSString *_identifier;	// 8 = 0x8
    NSArray *_menuItems;	// 16 = 0x10
    id <SCATMultipleMenuItemsElementDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000007b615
@property(nonatomic) __weak id <SCATMultipleMenuItemsElementDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *menuItems; // @synthesize menuItems=_menuItems;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;	// IMP=0x001000000007b4b5
- (_Bool)scatPerformAction:(int)arg1;	// IMP=0x001000000007b317
- (void)scatDidBecomeFocused:(_Bool)arg1;	// IMP=0x001000000007b177
- (_Bool)scatIndicatesOwnFocus;	// IMP=0x001000000007b16f

@end

