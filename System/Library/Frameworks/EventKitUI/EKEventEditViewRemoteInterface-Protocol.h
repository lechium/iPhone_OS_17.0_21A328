//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EKUIViewHierarchyFromComponents, NSDate, NSDictionary, NSString;

@protocol EKEventEditViewRemoteInterface
- (void)focusTitle;
- (void)focusAndSelectStartDate;
- (void)focusAndSelectTitle;
- (_Bool)hasUnsavedChanges;
- (void)cancelEditing;
- (void)updateEventEditViewWithChangedViewConfigurationDictionary:(NSDictionary *)arg1;
- (void)setupEventEditViewWithSerializedEventDictionary:(NSDictionary *)arg1 objectIDToChangeSetDictionaryMap:(NSDictionary *)arg2 objectIDToPersistentDictionaryMap:(NSDictionary *)arg3 eventOccurrenceDate:(NSDate *)arg4;
- (void)setupViewContextWithViewHierarchy:(EKUIViewHierarchyFromComponents *)arg1 layoutDirection:(long long)arg2 sizeCategory:(NSString *)arg3 sourceAccountManagement:(unsigned int)arg4 sourceBundleID:(NSString *)arg5;
@end

