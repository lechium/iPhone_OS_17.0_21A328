//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AddressBookAddress, EKCalendarItem, GEOEnhancedPlacement, GEOLabelGeometry, GEOServerResultScoreMetadata, MKMapItem, MapsLocationOfInterest, NSArray, NSDate, NSSet, NSString, ParkedCar, PersonalizedItemPrioritizedStringAdornment, PersonalizedItemSource, PersonalizedItemStyleAttributesAdornment, SearchResult, TrafficIncidentReport, VKLabelMarker;
@protocol PersonalizedItemKey, SearchDotPlace;

@interface CalendarItemSourceMapItem : NSObject
{
    EKCalendarItem *_calendarItem;	// 8 = 0x8
    MKMapItem *_mapItem;	// 16 = 0x10
    id <PersonalizedItemKey> _key;	// 24 = 0x18
    NSString *_title;	// 32 = 0x20
    NSString *_subtitle;	// 40 = 0x28
    _Bool _shouldBeHiddenFromMap;	// 48 = 0x30
    PersonalizedItemSource *source;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000a0d890
@property(nonatomic) _Bool shouldBeHiddenFromMap; // @synthesize shouldBeHiddenFromMap=_shouldBeHiddenFromMap;
@property(nonatomic) __weak PersonalizedItemSource *source; // @synthesize source;
@property(readonly, nonatomic) id <SearchDotPlace> searchDotPlace;
- (id)leafPersonalizedAutocompleteItems;	// IMP=0x0010000000a0d7ef
@property(readonly, nonatomic) _Bool isCompoundPersonalizedAutocompleteItem;
@property(readonly, nonatomic) unsigned long long serverItemIndexInSection;
@property(readonly, nonatomic) unsigned long long serverSectionIndex;
@property(readonly, nonatomic) _Bool hasServerItemIndex;
@property(readonly, nonatomic) id autocompleteObject;
@property(readonly, nonatomic) NSArray *autocompletionStrings;
@property(readonly, nonatomic) _Bool hidden;
@property(readonly, nonatomic) GEOServerResultScoreMetadata *serverResultScoreMetadata;
@property(readonly, nonatomic) long long priorityOverride;
@property(readonly, nonatomic) _Bool hasPriorityOverride;
@property(readonly, nonatomic) long long sourceSubtype;
@property(readonly, nonatomic) long long sourceType;
@property(readonly, nonatomic) NSArray *searchableStrings;
@property(readonly, nonatomic) AddressBookAddress *address;
@property(readonly, nonatomic) VKLabelMarker *sourceLabelMarker;
@property(readonly, nonatomic) SearchResult *searchResult;
@property(readonly, nonatomic) NSDate *eventDate;
@property(readonly, nonatomic) _Bool mustRefineMapItem;
@property(readonly, nonatomic) _Bool showsBalloonCallout;
@property(readonly, nonatomic) _Bool shouldBeClustered;
@property(readonly, nonatomic) PersonalizedItemStyleAttributesAdornment *styleAttributes;
@property(readonly, nonatomic) PersonalizedItemPrioritizedStringAdornment *subtitle;
@property(readonly, nonatomic) PersonalizedItemPrioritizedStringAdornment *title;
@property(readonly, nonatomic) PersonalizedItemPrioritizedStringAdornment *prefix;
@property(readonly, nonatomic) unsigned long long sortOrder;
@property(readonly, nonatomic) MKMapItem *mapItem;
@property(readonly, nonatomic) GEOLabelGeometry *labelGeometry;
@property(readonly, nonatomic) GEOEnhancedPlacement *enhancedPlacement;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
@property(readonly, nonatomic) unsigned long long priority;
@property(readonly, nonatomic) NSSet *keys;
- (id)initWithCalendarItem:(id)arg1 mapItem:(id)arg2;	// IMP=0x0010000000a0cd5b
- (id)init;	// IMP=0x0010000000a0cd4d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) TrafficIncidentReport *incidentReport;
@property(readonly, nonatomic) _Bool isRouteStartOrEnd;
@property(readonly, nonatomic) MapsLocationOfInterest *locationOfInterest;
@property(readonly, nonatomic) _Bool needsToPreserveSelection;
@property(readonly, nonatomic) ParkedCar *parkedCar;
@property(readonly, nonatomic) long long preferredDisplayedSearchResultType;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool wantsDisplayedSearchResultsTypePoints;

@end
