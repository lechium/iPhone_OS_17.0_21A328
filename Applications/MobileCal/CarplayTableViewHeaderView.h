//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewHeaderFooterView.h>

@class CarplayTableViewHeaderContentView, NSString;

@interface CarplayTableViewHeaderView : UITableViewHeaderFooterView
{
    CarplayTableViewHeaderContentView *_contentView;	// 8 = 0x8
    _Bool _headerFloatingOrAtTop;	// 16 = 0x10
    _Bool _anyCalendarsHiddenByFocus;	// 17 = 0x11
    NSString *_headerText;	// 24 = 0x18
}

+ (id)reuseIdentifier;	// IMP=0x00400000000db1db
+ (double)height;	// IMP=0x00100000000db1c2
- (void).cxx_destruct;	// IMP=0x00200000000db8db
- (_Bool);	// IMP=0x00100000000db8cb
@property(copy, nonatomic) NSString *headerText; // @synthesize headerText=_headerText;
- (id)initWithReuseIdentifier:(id)arg1;	// IMP=0x00100000000db6c1
- (void)layoutSubviews;	// IMP=0x00100000000db41b
- (void)setFloating:(_Bool)arg1;	// IMP=0x00100000000db2ac
@property(nonatomic) _Bool anyCalendarsHiddenByFocus; // @synthesize anyCalendarsHiddenByFocus=_anyCalendarsHiddenByFocus;

@end
