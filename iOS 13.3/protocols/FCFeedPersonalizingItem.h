/* Generated by RuntimeBrowser.
 */

@protocol FCFeedPersonalizingItem <NSObject>

@required

- (void)enumerateTopicCohortsWithBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *, void*
- (void)enumerateTopicCohortsWithBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *, void*
- (COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *)globalCohorts;
- (double)globalUserFeedback;
- (unsigned long long)halfLife;
- (bool)hasGlobalUserFeedback;
- (bool)hasVideo;
- (bool)isANF;
- (bool)isANF;
- (bool)isHiddenFromAutoFavorites;
- (bool)isHiddenFromAutoFavorites;
- (bool)isPaid;
- (bool)isPaid;
- (NSString *)itemID;
- (NSDate *)publishDate;
- (COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *)publisherCohorts;
- (NSString *)publisherID;
- (NSString *)sourceFeedID;
- (NSArray *)topicIDs;

@optional

- (long long)bodyTextLength;
- (bool)isBundlePaid;
- (bool)isBundlePaid;
- (bool)isFeatured;

@end