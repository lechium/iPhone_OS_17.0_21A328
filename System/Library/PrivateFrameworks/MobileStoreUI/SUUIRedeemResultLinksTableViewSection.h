//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SUUITableViewSection.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface SUUIRedeemResultLinksTableViewSection : SUUITableViewSection
{
    NSArray *_links;	// 8 = 0x8
    struct UIEdgeInsets _contentInsets;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001b795
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forIndexPath:(id)arg3;	// IMP=0x000000000001b6ee
- (id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2;	// IMP=0x000000000001b430
- (long long)numberOfRowsInSection;	// IMP=0x000000000001b413
- (double)heightForCellInTableView:(id)arg1 indexPath:(id)arg2;	// IMP=0x000000000001b405
- (id)initWithLinks:(id)arg1;	// IMP=0x000000000001b38b

@end

