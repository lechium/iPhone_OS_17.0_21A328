//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SUUIItemTableViewCell.h"

@class SUUIItemBrowseCellLayout;

__attribute__((visibility("hidden")))
@interface SUUIItemBrowseTableViewCell : SUUIItemTableViewCell
{
    SUUIItemBrowseCellLayout *_layout;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000002aff0a
@property(readonly, nonatomic) SUUIItemBrowseCellLayout *layout; // @synthesize layout=_layout;
- (void)configureForItem:(id)arg1 clientContext:(id)arg2 rowIndex:(long long)arg3;	// IMP=0x00000000002afc44
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000002afbd4

@end
