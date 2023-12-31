//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSIndexPath, UITableView, UITableViewCell;
@protocol SearchResultQuickActionMenuPresenterDelegate;

@interface SearchResultQuickActionMenuPresenter
{
    UITableView *_tableView;	// 120 = 0x78
    UITableViewCell *_tableViewCell;	// 128 = 0x80
    NSIndexPath *_indexPath;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x0020000000ace5ce
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) __weak UITableViewCell *tableViewCell; // @synthesize tableViewCell=_tableViewCell;
- (_Bool)shouldBeginOrbGestureAtLocation:(struct CGPoint)arg1 inView:(id)arg2;	// IMP=0x0010000000ace32b
- (id)targetPreviewBackgroundWithColor:(id)arg1;	// IMP=0x0010000000ace1cf
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x0010000000acdfc8
- (id)contextMenuInteraction:(id)arg1 configuration:(id)arg2 dismissalPreviewForItemWithIdentifier:(id)arg3;	// IMP=0x0010000000acdf48
- (id)contextMenuInteraction:(id)arg1 configuration:(id)arg2 highlightPreviewForItemWithIdentifier:(id)arg3;	// IMP=0x0010000000acde04
- (id)initWithTableView:(id)arg1;	// IMP=0x0010000000acdd93
- (id)initWithView:(id)arg1;	// IMP=0x0010000000acdd7f

// Remaining properties
@property(nonatomic) __weak id <SearchResultQuickActionMenuPresenterDelegate> delegate; // @dynamic delegate;

@end

