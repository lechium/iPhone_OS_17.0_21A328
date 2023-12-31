//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EventKitUI/NSObject-Protocol.h>

@class CUIKGroupInfo, EKAbstractCalendarEditor, EKCalendar, EKEvent, EKEventStore, EKSource, NSSet, NSString, NSURL;
@protocol EKCalendarChooserDelegate, EKStyleProvider, EKUIViewControllerNavigationDelegate;

@protocol EKCalendarChooserImpl <NSObject>
@property(nonatomic) _Bool disableCalendarEditing;
@property(nonatomic) _Bool showsRefreshButton;
@property(readonly, nonatomic) EKEventStore *eventStore;
@property(readonly, nonatomic) _Bool allSelected;
@property(nonatomic) _Bool onlyShowUnmanagedAccounts;
@property(nonatomic) _Bool showAccountStatus;
@property(nonatomic) int explanatoryTextMode;
@property(nonatomic) _Bool showsDeclinedEventsSetting;
@property(retain, nonatomic) EKCalendar *selectedCalendar;
@property(nonatomic) _Bool allowsPullToRefresh;
@property(nonatomic) _Bool disableCalendarsUnselectedByFocus;
@property(nonatomic) long long chooserMode;
@property(nonatomic) _Bool allowsRotation;
@property(nonatomic) _Bool showDetailAccessories;
@property(retain, nonatomic) EKSource *limitedToSource;
@property(nonatomic) __weak id <EKUIViewControllerNavigationDelegate> navigationDelegate;
@property(copy, nonatomic) NSSet *selectedCalendars;
@property(nonatomic) _Bool showsCancelButton;
@property(nonatomic) _Bool showsDoneButton;
@property(nonatomic) __weak id <EKCalendarChooserDelegate> delegate;
@property(readonly, nonatomic) long long selectionStyle;
- (void)openAddRegularCalendarWithTitle:(NSString *)arg1;
- (void)showAddSubscribedCalendarWithURL:(NSURL *)arg1;
- (void)groupHeaderChangedHeight:(CUIKGroupInfo *)arg1;
- (void)groupShowAllTapped:(CUIKGroupInfo *)arg1;
- (void)identityChanged:(EKSource *)arg1;
- (EKSource *)sourceForSelectedIdentity;
- (void)redisplayEditor:(EKAbstractCalendarEditor *)arg1 completion:(void (^)(void))arg2;
- (EKAbstractCalendarEditor *)displayedEditor;
- (void)centerOnCalendar:(EKCalendar *)arg1 animated:(_Bool)arg2;
- (void)centerOnCalendar:(EKCalendar *)arg1;
- (EKCalendar *)centeredCalendar;
- (void)focusModeConfigurationChanged;
- (void)setShowAll:(_Bool)arg1;
- (void)selectAllCalendars;
- (void)setStyleProvider:(id <EKStyleProvider>)arg1;
- (void)setShouldOverrideAuthorizationStatus:(_Bool)arg1 withRemoteUIStatus:(long long)arg2 displayStyle:(long long)arg3;
- (void)showAllButtonPressed;
- (id)initWithSelectionStyle:(long long)arg1 displayStyle:(long long)arg2 entityType:(unsigned long long)arg3 forEvent:(EKEvent *)arg4 eventStore:(EKEventStore *)arg5 limitedToSource:(EKSource *)arg6 showIdentityChooser:(_Bool)arg7 showDelegateSetupCell:(_Bool)arg8 showAccountStatus:(_Bool)arg9;
- (id)initWithSelectionStyle:(long long)arg1 displayStyle:(long long)arg2 entityType:(unsigned long long)arg3 eventStore:(EKEventStore *)arg4;
- (id)initWithSelectionStyle:(long long)arg1 displayStyle:(long long)arg2 eventStore:(EKEventStore *)arg3;
@end

