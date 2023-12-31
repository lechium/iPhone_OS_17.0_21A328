//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "EKEventDetailCell.h"

@class EKEventDetailAttendeesListView, NSArray, NSLayoutConstraint, NSObject, UIImageView, UILabel, UIViewController;
@protocol EKEventDetailAttendeeCellDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface EKEventDetailAttendeesCell : EKEventDetailCell
{
    UILabel *_titleLabel;	// 24 = 0x18
    UILabel *_countLabel;	// 32 = 0x20
    UIImageView *_disclosure;	// 40 = 0x28
    NSLayoutConstraint *_listHeight;	// 48 = 0x30
    EKEventDetailAttendeesListView *_attendeesListView;	// 56 = 0x38
    NSArray *_cachedAttendeesWithoutOrganizerAndLocations;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_sortAttendeesQueue;	// 72 = 0x48
    _Bool _loadingAttendees;	// 80 = 0x50
    UIViewController *_viewController;	// 88 = 0x58
    NSObject<EKEventDetailAttendeeCellDelegate> *_attendeeCellDelegate;	// 96 = 0x60
}

+ (_Bool)requiresConstraintBasedLayout;	// IMP=0x006000000006d45c
- (void).cxx_destruct;	// IMP=0x000000000006f4d9
@property(readonly, nonatomic) _Bool loadingAttendees; // @synthesize loadingAttendees=_loadingAttendees;
@property __weak NSObject<EKEventDetailAttendeeCellDelegate> *attendeeCellDelegate; // @synthesize attendeeCellDelegate=_attendeeCellDelegate;
@property __weak UIViewController *viewController; // @synthesize viewController=_viewController;
- (void)layoutForWidth:(double)arg1 position:(int)arg2;	// IMP=0x000000000006f42e
- (id)_attendeesListView;	// IMP=0x000000000006f30b
- (void)_setAttendees:(id)arg1;	// IMP=0x000000000006e2db
- (void)_attendeesDidFinishLoadingForTest;	// IMP=0x000000000006e26e
- (id)_attendeesWithoutOrganizerAndLocations;	// IMP=0x000000000006e216
- (_Bool)update;	// IMP=0x000000000006e099
- (double)displayHeight;	// IMP=0x000000000006df8f
- (double)footerInset;	// IMP=0x000000000006df2c
- (double)listToTitle;	// IMP=0x000000000006dec9
- (double)headerInset;	// IMP=0x000000000006de4e
- (id)initWithEvent:(id)arg1 editable:(_Bool)arg2;	// IMP=0x000000000006d464

@end

