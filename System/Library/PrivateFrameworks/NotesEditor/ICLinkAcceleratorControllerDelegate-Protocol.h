//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ICNAEventReporter, ICNote, ICTTTextStorage, NSString, UIView;

@protocol ICLinkAcceleratorControllerDelegate
- (void)didSelectNoteSuggestionWithIdentifier:(NSString *)arg1 title:(NSString *)arg2;
@property(nonatomic, readonly) ICNAEventReporter *eventReporter;
@property(nonatomic, readonly) UIView *acceleratorHostingView;
@property(nonatomic, readonly) ICNote *note;
@property(nonatomic, readonly) long long writingDirection;
@property(nonatomic, readonly) _Bool languageHasSpaces;
- (void)acceleratorOriginNeedsUpdate;
@property(nonatomic, readonly) struct _NSRange lastSelectedRangeForAccelerator;

@optional
@property(nonatomic, readonly) NSString *searchString;
@property(nonatomic, readonly) ICTTTextStorage *textStorage;
@end

