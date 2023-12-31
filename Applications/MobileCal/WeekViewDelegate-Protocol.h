//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "EKUIAppReviewPrompter-Protocol.h"
#import "NSObject-Protocol.h"

@class EKCalendarDate, EKEvent, MISSING_TYPE, NSArray, UIViewController, WeekView;

@protocol WeekViewDelegate <NSObject, EKUIAppReviewPrompter>
- (NSArray *)selectedEventsForEditMenu;
- (UIViewController *)presentationControllerForEditMenu;

@optional
- (WeekView *)weekViewForWeekAfter:(WeekView *)arg1;
- (WeekView *)weekViewForWeekBefore:(WeekView *)arg1;
- (MISSING_TYPE *)weekViewAllDaySectionDidScroll: /* Error: Ran out of types for this method. */;
- (void)weekView:(WeekView *)arg1 receivedTapInAllDayAreaOnDate:(EKCalendarDate *)arg2;
- (void)emptySpaceClickedOnDate:(EKCalendarDate *)arg1;
- (void)emptySpaceClick;
- (void)weekView:(WeekView *)arg1 didSelectEvent:(EKEvent *)arg2 userInitiated:(_Bool)arg3;
- (void)weekViewFirstVisibleSecondChanged:(long long)arg1;
- (void)weekViewDidEndDecelerating:(WeekView *)arg1;
- (void)weekViewDidEndDragging:(WeekView *)arg1 willDecelerate:(_Bool)arg2;
- (void)weekViewDidScroll:(WeekView *)arg1;
- (void)weekViewDidBeginDragging:(WeekView *)arg1;
- (void)weekViewOccurrenceLayoutDidChange:(WeekView *)arg1;
- (void)weekViewDidLayout:(WeekView *)arg1;
@end

