/* Generated by RuntimeBrowser.
 */

@protocol UIApplicationSceneClientSettings <NSObject>

@required

- (NSData *)activationConditionsData;
- (NSArray *)audioCategoriesDisablingVolumeHUD;
- (long long)backgroundStyle;
- (double)brightnessLevel;
- (NSString *)canvasTitle;
- (long long)compatibilityMode;
- (double)controlCenterAmbiguousActivationMargin;
- (long long)controlCenterRevealMode;
- (double)defaultPNGExpirationTime;
- (NSString *)defaultPNGName;
- (bool)defaultStatusBarHidden;
- (long long)defaultStatusBarStyle;
- (bool)deviceOrientationEventsEnabled;
- (bool)disablesMirroring;
- (FBSDisplayConfigurationRequest *)displayConfigurationRequest;
- (bool)homeIndicatorAutoHidden;
- (bool)idleModeVisualEffectsEnabled;
- (bool)idleTimerDisabled;
- (long long)interfaceOrientation;
- (bool)interfaceOrientationChangesDisabled;
- (bool)isReachabilitySupported;
- (bool)isStatusBarForegroundTransparent;
- (long long)notificationCenterRevealMode;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })primaryWindowOverlayInsets;
- (unsigned long long)proximityDetectionModes;
- (FBSDisplayMode *)requestedDisplayMode;
- (long long)sceneActivationBias;
- (unsigned long long)screenEdgesDeferringSystemGestures;
- (double)statusBarAlpha;
- (unsigned int)statusBarContextID;
- (bool)statusBarHidden;
- (long long)statusBarModernStyle;
- (NSDictionary *)statusBarPartStyles;
- (long long)statusBarStyle;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)userInterfaceStyle;
- (unsigned long long)visibleMiniAlertCount;
- (bool)wantsExclusiveForeground;
- (long long)whitePointAdaptivityStyle;

@end