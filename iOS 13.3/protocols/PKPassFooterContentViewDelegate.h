/* Generated by RuntimeBrowser.
 */

@protocol PKPassFooterContentViewDelegate <NSObject>

@required

- (bool)isPassFooterContentViewInGroup:(PKPassFooterContentView *)arg1;
- (void)passFooterContentViewDidAuthenticate:(PKPassFooterContentView *)arg1;
- (void)passFooterContentViewDidChangeCoachingState:(PKPassFooterContentView *)arg1;
- (void)passFooterContentViewDidChangePileSuppressionRequirement:(PKPassFooterContentView *)arg1;
- (void)passFooterContentViewDidChangeUserIntentRequirement:(PKPassFooterContentView *)arg1;
- (void)passFooterContentViewRequestsSessionSuppression:(PKPassFooterContentView *)arg1;
- (unsigned long long)suppressedContentForContentView:(PKPassFooterContentView *)arg1;

@end